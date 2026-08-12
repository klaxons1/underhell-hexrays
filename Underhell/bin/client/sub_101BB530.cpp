float *__thiscall sub_101BB530(int this, float *a2, int a3)
{
  unsigned __int16 v4; // ax
  float *result; // eax
  float v6; // ecx
  float v7; // edx
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // edx
  int v14; // eax
  float v15; // edx
  float v16; // ecx
  _DWORD v17[2]; // [esp+4h] [ebp-8h] BYREF

  v17[0] = a3;
  v17[1] = -1;
  v4 = sub_101BA800((_WORD *)(this + 8), (int)v17);
  if ( v4 == 0xFFFF )
  {
    result = a2;
    v6 = flt_10459250;
    *a2 = flt_1045924C;
    v7 = flt_10459254;
    a2[1] = v6;
    a2[2] = v7;
  }
  else
  {
    v8 = *(_DWORD *)(*(_DWORD *)(this + 12) + 16 * v4 + 12);
    if ( v8 != -1 && (v9 = (int *)((char *)off_103DCD74 + 16 * (v8 & 0xFFF) + 4), v10 = v8 >> 12, v9[1] == v10) && *v9 )
    {
      if ( v9[1] == v10 )
        v11 = *v9;
      else
        v11 = 0;
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 40))(v11);
      *a2 = *v12;
      v13 = *((_DWORD *)v12 + 1);
      v14 = *((_DWORD *)v12 + 2);
      *((_DWORD *)a2 + 1) = v13;
      *((_DWORD *)a2 + 2) = v14;
      return a2;
    }
    else
    {
      result = a2;
      v15 = flt_10459250;
      *a2 = flt_1045924C;
      v16 = flt_10459254;
      a2[1] = v15;
      a2[2] = v16;
    }
  }
  return result;
}
