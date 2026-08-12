int __thiscall sub_1019B480(int this)
{
  int result; // eax
  int *v2; // edi
  int v3; // esi
  float v4; // [esp+0h] [ebp-48h]
  float v5; // [esp+4h] [ebp-44h]
  float v6; // [esp+8h] [ebp-40h]
  _DWORD v7[11]; // [esp+14h] [ebp-34h] BYREF
  int v8; // [esp+40h] [ebp-8h]
  int v9; // [esp+44h] [ebp-4h]
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  result = *(_DWORD *)(this + 44);
  v2 = (int *)(this + 44);
  v8 = result;
  if ( result )
  {
    result = *(_DWORD *)(this + 48);
    v9 = result;
    if ( result )
    {
      v3 = this + 16;
      v6 = (float)v9;
      v5 = (float)v8;
      sub_10169680(v7, *(float *)(this + 16), *(float *)(this + 20), *(float *)(this + 24), v5, v6);
      v4 = (float)*v2;
      (*(void (__stdcall **)(int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_10413184 + 52))(
        8,
        v3,
        LODWORD(v4),
        0,
        v7);
      return sub_101696C0((int)v7, (int)&savedregs);
    }
  }
  return result;
}
