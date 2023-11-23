#include<iostream>
#include<string>
using namespace std;

struct symbol_table_entry
{
    string id;
    string type;
};

typedef struct symbol_table_entry smt;

vector<smt> table;

vector<string>d_types; 

void add_type(string s){
    d_types.push_back(s);
}

bool check(string s)
{
    for (auto i : table)
    {
        if (i.id == s) return false;
    }
    return true;
}

void insert(string var, string type)
{
    smt temp;
    temp.type = type;
    temp.id = var;
    table.push_back(temp);
}

void print_table()
{
    for (int i=0;i<table.size();i++)
    {
        cout << "ID : " << table[i].id << "\t Data Type : " << table[i].type << endl;
    }
}
