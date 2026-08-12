char __thiscall sub_10103810(int this)
{
  int v2; // edi
  int v3; // eax
  char result; // al
  int v5; // eax
  int v6; // edi
  double v7; // st7
  float v8; // [esp+18h] [ebp-28h]
  float v9[3]; // [esp+24h] [ebp-1Ch] BYREF
  float v10[3]; // [esp+30h] [ebp-10h] BYREF
  float v11; // [esp+3Ch] [ebp-4h]

  v2 = *(_DWORD *)this;
  v3 = sub_10034E90((_DWORD *)this);
  result = (*(int (__thiscall **)(int, int, int))(v2 + 324))(this, v3, 7);
  if ( result )
  {
    sub_1008FA90(this + 352, 1);
    sub_1008FB60((int *)(this + 352), *(_WORD *)(this + 388) | 4);
    sub_1008FB60((int *)(this + 352), *(_WORD *)(this + 388) | 8);
    sub_10035C70((_BYTE *)this, 0, 0);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
    if ( v5 )
    {
      (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_10413178 + 24))(dword_10413178, v5, v9, v10);
      sub_1008FC00(this + 352, v9, v10);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 120))(this);
    sub_1000DF30((_DWORD *)this, 32);
    sub_10035E20((unsigned __int16 *)this);
    sub_1008F150((float *)(this + 352));
    sub_10039310(this);
    v6 = *(_DWORD *)this;
    v11 = *(float *)(dword_1043639C + 44);
    v7 = RandomFloat(1.0, 1.1);
    v8 = v7 * v11 + *((float *)off_103DC81C + 3);
    (*(void (__thiscall **)(int, _DWORD))(v6 + 408))(this, LODWORD(v8));
    return 1;
  }
  return result;
}
