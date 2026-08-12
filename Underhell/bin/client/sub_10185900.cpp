BOOL __thiscall sub_10185900(_DWORD *this, float *a2)
{
  _BYTE v3[4]; // [esp+0h] [ebp-10h] BYREF
  _BYTE v4[4]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *, int *, int *))(this[62] + 44))(this + 62, v3, v4, &v6, &v5);
  return *a2 >= 0.0 && (double)v6 > *a2 && a2[1] >= 0.0 && (double)v5 > a2[1];
}
