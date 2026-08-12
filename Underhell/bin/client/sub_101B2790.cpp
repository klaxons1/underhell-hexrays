int __thiscall sub_101B2790(int this)
{
  int result; // eax
  unsigned __int16 *v3; // edi
  bool v4; // zf
  unsigned __int16 *v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(this + 208));
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(this + 213));
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
    dword_1047CA6C,
    (int)*(float *)(this + 220),
    (int)*(float *)(this + 228));
  v6 = (int)*(float *)(this + 228);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
             dword_1047CA78,
             "Valve_HudPoisonDamage");
  v3 = (unsigned __int16 *)result;
  v5 = (unsigned __int16 *)result;
  if ( result )
  {
    do
    {
      result = *v3;
      if ( !(_WORD)result )
        break;
      if ( result == 10 )
      {
        v6 = (int)((double)v6 + *(float *)(this + 236));
        result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
                   dword_1047CA6C,
                   (int)*(float *)(this + 220),
                   v6);
        v3 = v5;
      }
      else
      {
        result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, result, 0);
      }
      v4 = ++v3 == 0;
      v5 = v3;
    }
    while ( !v4 );
  }
  return result;
}
