int __thiscall sub_101B9E20(int this, int a2, int *a3)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // edi
  _DWORD v11[3]; // [esp+4h] [ebp-Ch] BYREF

  v11[2] = this;
  v11[0] = a2;
  result = (unsigned __int16)sub_101B8290((_WORD *)this, (int)v11);
  if ( (unsigned __int16)result != 0xFFFF )
  {
    result = *(_DWORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result + 12);
    v5 = *(_DWORD *)(this + 28) + 24 * result;
    if ( !*(_BYTE *)(v5 + 20) )
    {
      if ( *(_BYTE *)(v5 + 21) )
      {
        v6 = a3[3];
        v7 = a3[1];
        if ( v6 + 1 > v7 )
          sub_102ABFC0(v6 - v7 + 1);
        ++a3[3];
        v8 = *a3;
        result = a3[3] - v6 - 1;
        a3[4] = *a3;
        if ( result > 0 )
          result = (int)memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * result);
        v9 = (_DWORD *)(*a3 + 4 * v6);
        if ( v9 )
          *v9 = a2;
      }
      v10 = 0;
      for ( *(_BYTE *)(v5 + 20) = 1; v10 < *(_DWORD *)(v5 + 12); ++v10 )
        result = sub_101B9E20(*(_DWORD *)(*(_DWORD *)v5 + 4 * v10), a3);
    }
  }
  return result;
}
