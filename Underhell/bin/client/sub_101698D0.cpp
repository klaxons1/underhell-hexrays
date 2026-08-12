int __thiscall sub_101698D0(int this)
{
  int result; // eax
  int v2; // eax
  float v3; // ecx
  _DWORD v4[10]; // [esp+14h] [ebp-40h] BYREF
  float v5; // [esp+3Ch] [ebp-18h]
  float v6; // [esp+40h] [ebp-14h]
  float v7; // [esp+44h] [ebp-10h]
  float v8; // [esp+48h] [ebp-Ch]
  int v9; // [esp+4Ch] [ebp-8h]
  int v10; // [esp+50h] [ebp-4h]
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  result = *(_DWORD *)(this + 60);
  v10 = result;
  if ( result )
  {
    result = *(_DWORD *)(this + 64);
    v9 = result;
    if ( result )
    {
      if ( *(_BYTE *)(this + 76) )
      {
        v2 = this + 16;
        v6 = *(float *)(this + 16);
        v7 = *(float *)(this + 20);
        v3 = *(float *)(this + 24);
        *(float *)&v4[6] = v6;
        *(float *)&v4[7] = v7;
        v8 = v3;
        *(float *)&v4[8] = v3;
        *(float *)&v4[9] = (float)v9;
        v5 = (float)v10;
        memset(&v4[1], 0, 20);
        v4[0] = &CRagdollExplosionEnumerator::`vftable';
        (*(void (__thiscall **)(int, int, int, float, _DWORD, _DWORD *))(*(_DWORD *)dword_10413184 + 52))(
          dword_10413184,
          8,
          v2,
          COERCE_FLOAT(LODWORD(v5)),
          0,
          v4);
        return sub_101696C0((int)v4, (int)&savedregs);
      }
    }
  }
  return result;
}
