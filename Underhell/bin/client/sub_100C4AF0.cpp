__int16 __thiscall sub_100C4AF0(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_100C0CD0((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_100C0EB0(this);
  v5 = v4;
  sub_100C2D30(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 20 * v5 != -8 )
  {
    *(_DWORD *)(v6 + 20 * v5 + 8) = *v2;
    *(_DWORD *)(v6 + 20 * v5 + 12) = v2[1];
    *(_DWORD *)(v6 + 20 * v5 + 16) = v2[2];
  }
  return v5;
}
