/*
 * Copyright (c) nautix-git 2024
 * Written by ghgltggamer
 * Check the LICENSE file for Licensing info
 * Check out the README.md file for more information
 */
// Source
#ifndef MAIN
#define MAIN 101010111
#include "nautix-git.h"

int main(int argc, char* argv[]){
   if (argc > 1){
      std::string operation = argv[1];
      if (operation == "--docs"){
std::cout<<R"(
------------------- (Nautix-git) ---------------------
                   Documentation
------------------------------------------------------
1.) --version                         : This will show you the version of Nautix-git.
2.) --docs                            : This will show you the documentation of Nautix-git.
3.) --new [Reponame] [LICENSE] [PATH] : This will create a new project for GitHub which can then be used as a repo.
)";
      }
      else if (operation == "--version"){
         std::cout<<"SCNN : Nautix GIT - V1.0\n";
      }
      else if (operation == "--new"){
         if (argc < 5){
            std::cout<<"In sufficient agruments were passed to nautix-git\n";
            std::exit ( 3 );
         }
         repo_path = argv[4]
         ,repo_name = argv[2]
         ,repo_lic = argv[3];

         configure();

         std::cout<<"Repo name is "<<repo_name
                  <<"\nRepo path is "<<repo_path
                  <<"\nRepo license is MIT"
                  <<"\n";
         repo_path += "/"+repo_name;
         std::system(std::string("mkdir " + repo_path).c_str());
         std::system(std::string("mkdir " + repo_path + "/.github").c_str());
         std::system(std::string("mkdir " + repo_path + "/.github/ISSUE_TEMPLATE").c_str());
         std::system(std::string("mkdir " + repo_path + "/src").c_str());


         std::string readme_md = repo_path + "/README.md",
         license = repo_path + "/LICENSE",
         contributing = repo_path + "/CONTRIBUTING.md",
         changelogs_md = repo_path + "/CHANGELOGS.md",
         code_of_conduct_md = repo_path + "/CODE_OF_CONDUCT.md",
         security_md = repo_path + "/SECURITY.md",
         bug_report_md = repo_path + "/.github/ISSUE_TEMPLATE/bug_report.md",
         feature_request_md = repo_path + "/.github/ISSUE_TEMPLATE/feature_request.md";

         // Files creation
         std::ofstream file_readme_md(readme_md);
         std::ofstream file_license(license);
         std::ofstream file_changelogs_md(changelogs_md);
         std::ofstream file_code_of_conduct_md(code_of_conduct_md);
         std::ofstream file_security_md(security_md);
         std::ofstream file_bug_report_md(bug_report_md);
         std::ofstream file_feature_request_md(feature_request_md);
         std::ofstream file_contributing(contributing);

         //  adding content to files
         file_readme_md<<"# "<<repo_name<<"\nDescribe your project here\n";
         file_license<<MIT_LICENSE;
         file_changelogs_md<<CHANGELOG_MD;
         file_code_of_conduct_md<<CODE_OF_CONDUCT_MD;
         file_security_md<<SECURITY_MD;
         file_bug_report_md<<BUG_REPORT_MD;
         file_feature_request_md<<FEATURE_REQUEST_MD;
         file_contributing<<CONTRIBUTING_MD;
      }
      else {
         std::cout<<"Invalid operation passed to Nautix Git , What is '"<<operation<<"'\n";
      }
   }
   else {
      std::cout<<"Nautix-git requires atleast a single argument please use --docs for documentation\n";
   }
}
#endif