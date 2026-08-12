void __thiscall sub_1005C900(float *this)
{
  float *v2; // ecx
  double i; // st7
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+4h] [ebp-Ch]
  float v11; // [esp+Ch] [ebp-4h]

  sub_1005C150(this);
  sub_1005C860(v2);
  sub_1005C230(this);
  if ( this[305] > 0.1 )
  {
    for ( i = *((float *)off_103DC81C + 4); i >= this[2604]; i = v11 )
    {
      v11 = i - this[2604];
      this[2604] = this[2603];
      v4 = (_DWORD *)sub_1007A6A0(0);
      if ( v4 )
      {
        v10 = (**(int (__thiscall ***)(void *, const char *))off_103DDBCC)(off_103DDBCC, "PlasmaGlowFade");
        if ( v10 >= 0 )
        {
          v5 = *(_DWORD *)dword_10413164;
          v6 = (*(int (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 36))(this, 0, 0);
          v7 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 40))(v4, v6);
          v8 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 36))(v4, v7);
          v9 = (*(int (__thiscall **)(_DWORD *, int))(v4[1] + 36))(v4 + 1, v8);
          (*(void (__thiscall **)(int, int, _DWORD, int))(v5 + 4))(dword_10413164, v10, 0, v9);
        }
      }
    }
    this[2604] = this[2604] - i;
  }
}
