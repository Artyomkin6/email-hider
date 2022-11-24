#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include <fstream>
#include <vector>

std::vector<std::string> read_file_mails(const std::string& path);

void hide_mails_part(std::vector<std::string>& mails);

void save_hidden_mails(const std::vector<std::string>& mails, const std::string& path);

#endif // EDITOR_H
