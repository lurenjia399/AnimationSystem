#include "AzureNumericalCalculation.h"

float AzureNumericalCalculation::GetDamage(float ActivePhysicsAttack, float PassivePhysicsDefense, float DamageBase)
{
    return ActivePhysicsAttack * (100 / (100 + PassivePhysicsDefense)) + DamageBase;
}
