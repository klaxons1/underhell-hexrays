void __thiscall sub_1025C8C0(void *this, int a2)
{
  float v3; // edx
  float v4; // eax
  float v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( *(_BYTE *)(a2 + 4518) == 1 )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a2);
      v3 = *(float *)(a2 + 480);
      v4 = *(float *)(a2 + 484);
      v5[0] = *(float *)(a2 + 476) * 0.5;
      v5[2] = v4;
      v5[1] = 0.5 * v3;
      sub_100DD660(a2, v5);
      sub_100EA940((int *)a2, 32);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) || *(_BYTE *)(a2 + 306) != 8 )
    {
      sub_1025C680(this, a2);
    }
    else
    {
      DevMsg("In level transition: %s %s\n", byte_106C75F8, &byte_106C75D8);
    }
  }
}
