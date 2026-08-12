int __thiscall sub_1024B690(int (__thiscall ***this)(void *, int, int), int a2, int a3)
{
  int (__thiscall ***v3)(void *, int, int); // ebp
  int v4; // esi
  int (__thiscall ***v5)(void *, int, int); // edi
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  char v14; // [esp+11h] [ebp-29h]
  int v15; // [esp+12h] [ebp-28h] BYREF
  int v16; // [esp+16h] [ebp-24h] BYREF
  int v17; // [esp+1Ah] [ebp-20h] BYREF
  int v18; // [esp+1Eh] [ebp-1Ch] BYREF
  int v19; // [esp+22h] [ebp-18h] BYREF
  int (__thiscall ***v20)(void *, int, int); // [esp+26h] [ebp-14h]
  int v21; // [esp+2Ah] [ebp-10h] BYREF
  int v22; // [esp+2Eh] [ebp-Ch] BYREF
  int v23; // [esp+32h] [ebp-8h] BYREF
  int i; // [esp+36h] [ebp-4h]

  v3 = this;
  v20 = this;
  sub_102366A0(this, a2, a3);
  (*v3)[61](v3, 0, 0);
  v4 = 0;
  for ( i = 0; v4 < sub_10237130((int (__thiscall ***)(_DWORD))v3); i = v4 )
  {
    v5 = (int (__thiscall ***)(void *, int, int))sub_10237150(v3, v4);
    if ( v5 )
    {
      sub_10236250(v5, (int)&v15, (int)&v16, (int)&v19, (int)&v23);
      sub_10237670((__int16 *)v5, &v17, &v21);
      sub_102376A0((__int16 *)v5, &v18, &v22);
      v6 = sub_10237690((unsigned __int8 *)v5);
      v7 = v6 == 1 || v6 == 3;
      if ( v6 == 2 || (v14 = 0, v6 == 3) )
        v14 = 1;
      v8 = sub_10237660(v5);
      if ( v8 == 1 || v8 == 3 )
      {
        v10 = a2 + v17;
        if ( v7 )
          v9 = v18;
        else
          v9 = v10 - v19;
        v15 = v9;
      }
      else
      {
        v9 = v17;
        v15 = v17;
        if ( v7 )
          v10 = v18 + a2;
        else
          v10 = v17 + v19;
      }
      if ( v8 == 2 || v8 == 3 )
      {
        v12 = v21 + a3;
        if ( v14 )
          v11 = v22;
        else
          v11 = v12 - v23;
        v16 = v11;
      }
      else
      {
        v11 = v21;
        v16 = v21;
        if ( v14 )
        {
          v3 = v20;
          v12 = a3 + v22;
        }
        else
        {
          v12 = v21 + v23;
          v3 = v20;
        }
      }
      if ( v10 < v9 )
        v10 = v9;
      if ( v12 < v11 )
        v12 = v11;
      sub_10236200(v5, v9, v11, v10 - v9, v12 - v11);
      (*v5)[61](v5, 0, 0);
      v4 = i;
    }
    ++v4;
  }
  return ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v3)[4])(v3);
}
