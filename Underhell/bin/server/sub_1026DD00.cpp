int __thiscall sub_1026DD00(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  char *v11; // eax
  int v12; // eax
  int i; // [esp+Ch] [ebp+8h]

  result = sub_1042A2F0(a2);
  for ( i = result; result; i = result )
  {
    v5 = this[24];
    v6 = this[22];
    if ( v5 + 1 > v6 )
      sub_1026A970(this + 21, v5 - v6 + 1);
    ++this[24];
    v7 = this[21];
    v8 = this[24] - v5 - 1;
    this[25] = v7;
    if ( v8 > 0 )
      memcpy((void *)(156 * v5 + v7 + 156), (const void *)(156 * v5 + v7), 156 * v8);
    v9 = 156 * v5;
    v10 = v9 + this[21];
    v11 = (char *)sub_1042A070(i);
    sub_104299C0((char *)(v10 + 2), v11, 0x80u);
    *(_BYTE *)(this[21] + v9 + 1) = a3;
    v12 = sub_1042B460(0, (int)String);
    if ( sub_104291C0(v12, "upsidedown", 10) )
      *(_BYTE *)(v9 + this[21]) = 1;
    else
      *(_BYTE *)(v9 + this[21]) = 0;
    result = sub_1042A300(i);
  }
  return result;
}
