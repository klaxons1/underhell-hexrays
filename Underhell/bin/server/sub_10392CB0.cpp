void __thiscall sub_10392CB0(_DWORD *this, int a2)
{
  int v2; // edx

  if ( *(_DWORD *)a2 == 2050 )
  {
    sub_1023C380(this, (int)"NPC_Citizen.FootstepLeft", *(float *)(a2 + 12), 0);
  }
  else if ( *(_DWORD *)a2 == 2051 )
  {
    sub_1023C380(this, (int)"NPC_Citizen.FootstepRight", *(float *)(a2 + 12), 0);
  }
  else
  {
    v2 = this[906];
    if ( v2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 248))(v2, a2);
    else
      sub_1003AD70((int)this, a2);
  }
}
