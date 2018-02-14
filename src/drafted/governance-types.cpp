
#include "governance-types.h"

GovernanceObjectType GovernanceStringToType(std::string strType) {
    GovernanceObjectType type = Error;

    if(strType == "AllTypes") type = AllTypes;
    if(strType == "Error") type = Error;
    if(strType == "ValueOverride") type = ValueOverride;
    if(strType == "Coin2FlyNetwork") type = Coin2FlyNetwork;
    if(strType == "Coin2FlyNetworkVariable") type = Coin2FlyNetworkVariable;
    if(strType == "Category") type = Category;
    if(strType == "Group") type = Group;
    if(strType == "User") type = User;
    if(strType == "Company") type = Company;
    if(strType == "Project") type = Project;
    if(strType == "ProjectReport") type = ProjectReport;
    if(strType == "ProjectMilestone") type = ProjectMilestone;
    if(strType == "Proposal") type = Proposal;
    if(strType == "Contract") type = Contract;

    return type;
};

std::string GovernanceTypeToString(GovernanceObjectType type) {
    std::string s = "";

    if(type == AllTypes) s = "AllTypes";
    if(type == Error) s = "Error";
    if(type == ValueOverride) s = "ValueOverride";
    if(type == Coin2FlyNetwork) s = "Coin2FlyNetwork";
    if(type == Coin2FlyNetworkVariable) s = "Coin2FlyNetworkVariable";
    if(type == Category) s = "Category";
    if(type == Group) s = "Group";
    if(type == User) s = "User";
    if(type == Company) s = "Company";
    if(type == Project) s = "Project";
    if(type == ProjectReport) s = "ProjectReport";
    if(type == ProjectMilestone) s = "ProjectMilestone";
    if(type == Proposal) s = "Proposal";
    if(type == Contract) s = "Contract";

    return s;
};