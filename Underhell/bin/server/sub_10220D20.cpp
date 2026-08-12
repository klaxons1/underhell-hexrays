int __thiscall sub_10220D20(_DWORD *this, int a2, int a3, int a4, int *a5, int a6)
{
  void (__thiscall *v7)(_DWORD *, int, int *, int); // edx
  int *v9; // edi
  char v10; // al
  int v11; // eax
  int v12; // edx
  int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // esi
  int result; // eax
  int v18; // edi
  int v19; // [esp+Ch] [ebp-Ch]
  int i; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h] BYREF

  v7 = *(void (__thiscall **)(_DWORD *, int, int *, int))(*this + 48);
  v19 = *(_DWORD *)(this[6] + 8);
  v21 = -1;
  v7(this, a2, &v21, 1);
  v21 = 0;
  for ( i = 0; i < a6; ++i )
  {
    v9 = (int *)(a3 + a5[2]);
    if ( sub_1021D060(this, v9, a5) )
    {
      if ( *a5 > 11 )
        v10 = sub_10220220((_DWORD **)this, a2, v9, a4, (int)a5);
      else
        v10 = sub_1021D200(this, a2, v9, a4, (int)a5);
      if ( !v10 )
        break;
      ++v21;
    }
    a5 += 13;
  }
  v11 = this[6];
  v12 = *(_DWORD *)(v11 + 8);
  v13 = v12 - v19;
  v14 = v12 - v19;
  if ( v12 < v12 - v19 )
    v14 = *(_DWORD *)(v11 + 8);
  v15 = -v14;
  *(_DWORD *)(v11 + 4) += v15;
  *(_DWORD *)(v11 + 8) = v15 + v12;
  (*(void (__thiscall **)(_DWORD *, int, int *, int))(*this + 48))(this, a2, &v21, 1);
  v16 = this[6];
  result = 1;
  v18 = v19 + v13 - *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 4) += v18;
  *(_DWORD *)(v16 + 8) += v18;
  return result;
}
