int *__thiscall sub_10107340(int *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edx
  const void *v7; // esi
  void *v8; // edi
  _DWORD *v11; // [esp+18h] [ebp+8h]

  if ( a2 )
    v11 = (_DWORD *)(a2 + 4);
  else
    v11 = 0;
  v3 = v11[3];
  v4 = this + 1;
  this[4] = 0;
  sub_10105EF0(this + 1, 0, v3, 0);
  if ( v3 <= 0 )
    return this;
  v5 = 0;
  v6 = v3;
  do
  {
    v7 = (const void *)(v5 + *v11);
    v8 = (void *)(v5 + *v4);
    v5 += 1240;
    --v6;
    qmemcpy(v8, v7, 0x4D8u);
  }
  while ( v6 );
  return this;
}
