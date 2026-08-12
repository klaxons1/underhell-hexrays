int __thiscall sub_1006E870(int *this, const void *a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // edi
  bool v8; // zf
  void *v9; // edi
  int result; // eax

  v3 = sub_1006E4F0(this, 0);
  sub_1006E5F0(this, v3);
  v4 = *this;
  v5 = 68 * v3;
  *(_DWORD *)(v4 + v5 + 64) = -1;
  v6 = this[4];
  *(_DWORD *)(v4 + v5 + 60) = v6;
  this[4] = v3;
  if ( v6 == -1 )
    this[3] = v3;
  else
    *(_DWORD *)(*this + 68 * v6 + 64) = v3;
  v7 = *this;
  ++this[6];
  v8 = v5 + v7 == 0;
  v9 = (void *)(v5 + v7);
  result = v3;
  if ( !v8 )
    qmemcpy(v9, a2, 0x3Cu);
  return result;
}
