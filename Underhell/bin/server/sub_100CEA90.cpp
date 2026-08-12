__int16 __thiscall sub_100CEA90(int this, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_100CA260(this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_100CA350(this);
  v5 = v4;
  sub_100CBDC0(this, v4, v8, (char)a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 24 * v5 != -8 )
  {
    *(_DWORD *)(v6 + 24 * v5 + 8) = *(_DWORD *)v2;
    *(_DWORD *)(v6 + 24 * v5 + 12) = *((_DWORD *)v2 + 1);
    *(_DWORD *)(v6 + 24 * v5 + 16) = *((_DWORD *)v2 + 2);
    *(float *)(v6 + 24 * v5 + 20) = *((float *)v2 + 3);
  }
  return v5;
}
