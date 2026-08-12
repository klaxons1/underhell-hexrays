int __thiscall sub_101C1B80(_DWORD *this, char a2, int a3)
{
  int result; // eax
  int v5; // eax
  int v6; // esi
  void *v7; // ecx
  int v8; // esi
  void *v9; // edi
  float *v10; // eax
  int v11; // eax
  int v12; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  sub_101C1B30((int)this);
  result = this[9] - 1;
  v12 = result;
  if ( result >= 0 )
  {
    v5 = 104 * result;
    for ( i = v5; ; v5 = i )
    {
      v6 = this[6];
      v7 = *(void **)(v6 + v5);
      v8 = v5 + v6;
      v9 = v7;
      sub_100DCB50(v7, v8 + 4);
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v8 + 620))(*(float *)(dword_106B31C8 + 16));
      v10 = (float *)sub_100D7680(*(_DWORD *)v8);
      if ( *(_BYTE *)(v8 + 101) && v10 )
        sub_10020520(v10);
      v11 = *(_DWORD *)(v8 + 92);
      if ( v11 )
        sub_101C6C90(v11, v8 + 16);
      if ( a2 )
        (*(void (__thiscall **)(_DWORD *, void *, int))(*this + 8))(this, v9, a3);
      i -= 104;
      result = v12 - 1;
      v12 = result;
      if ( result < 0 )
        break;
    }
  }
  return result;
}
