char __thiscall sub_102B2150(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+14h] [ebp-18h]
  double v16; // [esp+24h] [ebp-8h] BYREF

  if ( sub_100D1940((_DWORD *)this) )
  {
    v2 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    {
      v3 = sub_100D1940((_DWORD *)this);
      v4 = v3;
      if ( *(_BYTE *)(v3 + 5105) )
      {
        if ( sub_100BDCE0(this, 202) != -1 )
        {
          v5 = *(_DWORD *)this;
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1212))(this);
          v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 1208))(this, 202, v6);
          v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1204))(this, 0, v7);
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(v5 + 984))(this, v8) )
          {
            *(_BYTE *)(this + 1127) = 1;
            v14 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_10031BA0(v4, v14);
            v16 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_100D2DA0((float *)(this + 1132), &v16);
            v16 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_1016A120((float *)(this + 1136), &v16);
            return 1;
          }
        }
      }
      else if ( *(_BYTE *)(v3 + 5106) )
      {
        if ( sub_100BDCE0(this, 205) != -1 )
        {
          v10 = *(_DWORD *)this;
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1212))(this);
          v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 1208))(this, 205, v11);
          v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1204))(this, 0, v12);
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(v10 + 984))(this, v13) )
          {
            *(_BYTE *)(this + 1126) = 1;
            v15 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_10031BA0(v4, v15);
            v16 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_100D2DA0((float *)(this + 1132), &v16);
            v16 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_1016A120((float *)(this + 1136), &v16);
            return 1;
          }
        }
      }
    }
  }
  *(_WORD *)(this + 1126) = 0;
  return sub_100D1420((int *)this);
}
