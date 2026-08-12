int __thiscall sub_101BB450(int this, int a2, int a3)
{
  unsigned __int16 v4; // ax
  int result; // eax
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  _DWORD v17[2]; // [esp+4h] [ebp-8h] BYREF

  v17[0] = a3;
  v17[1] = -1;
  v4 = sub_101BA800((_WORD *)(this + 8), (int)v17);
  if ( v4 == 0xFFFF )
  {
    result = a2;
    v6 = qword_10459244;
    *(float *)a2 = flt_10459240;
    v7 = HIDWORD(qword_10459244);
    *(_DWORD *)(a2 + 4) = v6;
    *(_DWORD *)(a2 + 8) = v7;
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
      v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
      *(_DWORD *)a2 = *v12;
      v13 = v12[1];
      v14 = v12[2];
      *(_DWORD *)(a2 + 4) = v13;
      *(_DWORD *)(a2 + 8) = v14;
      return a2;
    }
    else
    {
      result = a2;
      v15 = qword_10459244;
      *(float *)a2 = flt_10459240;
      v16 = HIDWORD(qword_10459244);
      *(_DWORD *)(a2 + 4) = v15;
      *(_DWORD *)(a2 + 8) = v16;
    }
  }
  return result;
}
