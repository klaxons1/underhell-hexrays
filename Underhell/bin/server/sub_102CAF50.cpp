void __usercall sub_102CAF50(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  float v10[13]; // [esp+4h] [ebp-60h] BYREF
  int v11; // [esp+38h] [ebp-2Ch]
  float v12; // [esp+3Ch] [ebp-28h]
  int v13; // [esp+48h] [ebp-1Ch]

  if ( *(_BYTE *)(a1 + 1132) )
  {
    v3 = *(_DWORD *)(a1 + 300);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 2] == v5 )
            v6 = *v4;
          else
            v6 = 0;
          v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 208))(v6, a2);
          sub_100C1B10(v7);
          if ( *(_DWORD *)(a1 + 1392) == 2 )
          {
            sub_1001F130(v10);
            v13 = *(_DWORD *)(a1 + 1108);
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
            sub_1028E890((int)"ChopperMuzzleFlash", (int)v10);
          }
          else
          {
            sub_1001F130(v10);
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
            v9 = *(_DWORD *)(a1 + 1108);
            v12 = 1.0;
            v13 = v9;
            LODWORD(v10[12]) = 5;
            v11 = v8;
            sub_1028E890((int)"MuzzleFlash", (int)v10);
          }
        }
      }
    }
  }
}
