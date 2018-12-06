#include <iostream>
#include <map>
#include <vector>
#include <string>

class GroupManagement
{
private:
    std::map<std::string, std::vector<std::string>* > group_list;
public:
    GroupManagement()
    {
        
    }
    
    void add_new_team(std::string _leader)
    {
        group_list.insert( 
            std::pair<std::string, std::vector<std::string>*>(_leader, new std::vector<std::string>())
            );    
    }
    
    void add_team_mates(std::string _leader, std::string _mate)
    {
            group_list[_leader]->push_back(_mate);
    }
    
    void print_team(std::string _leader)
    {
        for(std::map<std::string, std::vector<std::string>* >::iterator iter = group_list.begin();
            iter != group_list.end();
            iter++)
            {
                // iter->first : key
                // iter->second : value
                if((iter->first).compare(_leader) == 0)
                {
                    for(std::vector<std::string>::iterator it = (*iter->second).begin();
                        it != (*iter->second).end();
                        ++it)
                        {
                            std::cout << *it << std::endl;
                        }    
                }
            }    
    }
};

int main()
{

    GroupManagement gm;
    gm.add_new_team("2110001");
    
    gm.add_team_mates("2110001", "2110001");
    gm.add_team_mates("2110001", "2120001");
    gm.add_team_mates("2110001", "2110002");
    
    gm.print_team("2110002");
    // "2110001", { "2110001", "2120001", "2110002"}
    
    
        
    //group_list["2110001"]->push_back("2110001");
    //group_list["2110001"]->push_back("2120001");
    //group_list["2110001"]->push_back("2110002");
    
    
    return 0;
}