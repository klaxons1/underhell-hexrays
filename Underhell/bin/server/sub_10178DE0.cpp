int __thiscall sub_10178DE0(int this)
{
  char v2; // al
  char v3; // cl
  char v4; // al
  const char *v5; // eax
  int v7; // edx
  float v8; // [esp+8h] [ebp-10h]
  _BYTE v9[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = *(_BYTE *)(this + 812);
  v3 = *(_BYTE *)(this + 813);
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      goto LABEL_6;
    v4 = v2 - 1;
  }
  else
  {
    v4 = v2 + 1;
  }
  *(_BYTE *)(this + 812) = v4;
LABEL_6:
  if ( *(_BYTE *)(this + 812) == v3 )
  {
    v5 = *(const char **)(this + 808);
    if ( !v5 )
      v5 = String;
    (*(void (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
      dword_106B31D0,
      *(_DWORD *)(this + 800),
      v5);
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
  else
  {
    v9[0] = *(_BYTE *)(this + 812);
    v7 = *(_DWORD *)(this + 800);
    v9[1] = 0;
    (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 156))(dword_106B31D0, v7, v9);
    v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)this, v8, 0);
  }
}
