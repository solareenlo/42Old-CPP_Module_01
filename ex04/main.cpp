/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:09:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/10 20:09:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 4 || *argv[2] == '\0' || *argv[3] == '\0') {
        std::cout << "Usage: ./replace <file> <s1> <s2>" << std::endl;
        std::cout << "<s1> and <s2> is not empty string." << std::endl;
        return 1;
    }

    const std::string input_file(argv[1]);
    std::fstream fin;
    fin.open(input_file.c_str(), std::ios::in);
    if (!fin) {
        std::cerr << "error: unable to open " << input_file;
        std::cerr << " for input" << std::endl;
        return 1;
    }

    const std::string output_file(input_file + ".replace");
    std::fstream fout;
    fout.open(output_file.c_str(), std::ios::out);
    if (!fout) {
        fin.close();
        std::cerr << "error: unable to open " << output_file;
        std::cerr << " for output" << std::endl;
        return 1;
    }

    const std::string s1(argv[2]), s2(argv[3]);
    std::string file_str = "", line = "";
    while (std::getline(fin, line)) {
        file_str = file_str + line;
        if (fin.eof() == false) {
            file_str = file_str + "\n";
        }
    }

    std::string::size_type pos = file_str.find(s1);
    while (pos != std::string::npos) {
        file_str.replace(pos, s1.length(), s2);
        pos = file_str.find(s1, pos + s2.length());
    }

    fout << file_str;

    fin.close();
    fout.close();

    return 0;
}
