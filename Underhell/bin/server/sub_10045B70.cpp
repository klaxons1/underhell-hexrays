bool __thiscall sub_10045B70(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+4h] [ebp-20h]
  int v16; // [esp+8h] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-18h]
  int v18; // [esp+10h] [ebp-14h]
  int v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD **)(this + 2124);
  if ( !v2 || !v2[2] )
    return 0;
  *(_DWORD *)(this + 2224) = v2[3];
  *(_DWORD *)(this + 2228) = v2[4];
  *(_DWORD *)(this + 2232) = v2[5];
  *(_DWORD *)(this + 2236) = v2[6];
  *(_DWORD *)(this + 2240) = v2[7];
  *(_DWORD *)(this + 2244) = v2[8];
  *(_DWORD *)(this + 2248) = v2[9];
  *(_DWORD *)(this + 2252) = v2[10];
  if ( *(_DWORD *)(this + 2324) != 4
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 2700)
    && (*(_DWORD *)(this + 2232) & 0x80) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1332))(this);
  }
  sub_10024230((char *)this, 68);
  v3 = *(_DWORD *)(this + 2228) & *(_DWORD *)(this + 2196);
  v4 = *(_DWORD *)(this + 2232) & *(_DWORD *)(this + 2200);
  v5 = *(_DWORD *)(this + 2236) & *(_DWORD *)(this + 2204);
  v19 = *(_DWORD *)(this + 2240) & *(_DWORD *)(this + 2208);
  v20 = *(_DWORD *)(this + 2244) & *(_DWORD *)(this + 2212);
  v6 = *(_DWORD *)(this + 2248) & *(_DWORD *)(this + 2216);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v7 = *(_DWORD *)(this + 2192) & *(_DWORD *)(this + 2224);
  v21 = v6;
  v8 = *(_DWORD *)(this + 2252) & *(_DWORD *)(this + 2220);
  v15 = v7;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  v22 = v8;
  if ( v7 || v3 || v4 || v5 || v19 || v20 || v21 || v8 )
  {
    v9 = 0;
    if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) )
    {
      v10 = *(_DWORD *)(this + 2124);
      *(_DWORD *)(this + 3560) = 0;
      *(_DWORD *)(this + 3564) = v10;
      while ( ((1 << (v9 & 0x1F)) & *(&v15 + (v9 >> 5))) == 0 )
      {
        if ( ++v9 >= 256 )
          goto LABEL_27;
      }
      if ( v9 == -1 )
        v11 = -1;
      else
        v11 = v9 + 1000000000;
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1388))(this, v11);
      *(_DWORD *)(this + 3556) = v12;
      if ( !v12 )
        *(_DWORD *)(this + 3556) = "(UNKNOWN CONDITION)";
      if ( (*(_DWORD *)(this + 236) & 0x8000000) != 0 )
        sub_10029620((_DWORD *)this, 1, (int)"      Break condition -> %s\n");
LABEL_27:
      if ( sub_10023D10((_DWORD *)this, 26) && (*(_DWORD *)(this + 236) & 0x8000000) != 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        {
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          sub_100D6390(v13);
        }
        sub_10029620((_DWORD *)this, 1, (int)"      New enemy: %s\n");
      }
    }
    return 0;
  }
  return !sub_10023D10((_DWORD *)this, 36) && !sub_10023D10((_DWORD *)this, 35);
}
