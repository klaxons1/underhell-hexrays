_DWORD *__thiscall sub_103F7E10(int this)
{
  _DWORD *result; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  int *v5; // esi
  int v6; // eax
  float v7; // [esp+4h] [ebp-74h]
  float v8[24]; // [esp+18h] [ebp-60h] BYREF

  result = (_DWORD *)sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 320))(result);
    if ( (_BYTE)result )
    {
      result = (_DWORD *)sub_101E7EA0(v3, 0);
      v4 = result;
      if ( result )
      {
        sub_1001F130(v8);
        LODWORD(v8[13]) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v4[6]);
        LODWORD(v8[17]) = 1;
        sub_1028E890((int)"CrossbowLoad", (int)v8);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        result = sub_10243040("sprites/blueflare1.vmt", (float *)(this + 580), 0);
        v5 = result;
        if ( result )
        {
          v6 = sub_101E7EA0(v3, 0);
          sub_10126B10((int)v5, v6, 1);
          sub_10128950((int)v5, 5, 255, 255, 255, 255, 0);
          sub_10242820((int)v5, 128, 0.0);
          sub_102428B0((int)v5, 0.2, 0.0);
          sub_100EC3F0(v5, (int)sub_10242DB0, 0.0, 0);
          v7 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
          return (_DWORD *)sub_100EC4A0(v5, v7, 0);
        }
      }
    }
  }
  return result;
}
