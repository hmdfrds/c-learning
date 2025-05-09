#include <stdio.h>

int main()
{

    int resources = 257;
    int teamCount = 5;
    int maxResourcePerContainer = 50;

    int resourcesPerTeam = resources / teamCount;
    int undistributedResources = resources % teamCount;

    printf("--- Resource Allocation Report ---\n\n");
    printf("Total Resource Units: %d\n\n", resources);

    printf("TeamDistribution:\n");
    printf("Each of the %d teams receives: %d units\n");
    printf("Units remaining after team distribution: %d\n\n", undistributedResources);

    int completelyFilledCargo = resources / maxResourcePerContainer;
    int lastCargoTotalResource = resources % maxResourcePerContainer;

    printf("Container Packing (Capacity: %d units/container):\n", maxResourcePerContainer);
    printf("Number of full containers needed: %d containers", completelyFilledCargo);
    printf("Units in the last (partially filled) container: %d units", lastCargoTotalResource);

    return 0;
}