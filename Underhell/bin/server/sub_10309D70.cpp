char __thiscall sub_10309D70(int *this, int a2, int a3)
{
  int v4; // esi
  int (__thiscall ***v5)(_DWORD, _DWORD); // eax
  int v6; // eax
  float *v7; // edi
  float *v8; // eax
  double v9; // st7
  int v10; // eax
  float *v11; // eax
  float v13; // [esp+18h] [ebp-74h]
  int v14[20]; // [esp+30h] [ebp-5Ch] BYREF
  int v15[3]; // [esp+80h] [ebp-Ch] BYREF

  if ( sub_102654D0(a2, a3)
    && sub_10265430((int)this, a2, this[1])
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 68))(v4, this[2], a3)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
             dword_106B3CDC,
             this[2],
             *(_DWORD *)(v4 + 420))
        && *(_BYTE *)(v4 + 225) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4) )
        {
          v5 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4);
          v6 = (**v5)(v5, 0);
          if ( v6 )
            v4 = v6;
        }
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this[3] + 576))(this[3]);
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
        *(float *)v15 = *v8 - *v7;
        *(float *)&v15[1] = v8[1] - v7[1];
        *(float *)&v15[2] = v8[2] - v7[2];
        off_10689714();
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
          v9 = *(float *)(dword_106E3104 + 44);
        else
          v9 = 250.0;
        v13 = v9;
        sub_10248110((int)v14, this[3], this[3], v13, 1, 0);
        v10 = sub_1001E870(v14);
        v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
        sub_10248690((float *)v14, (float *)v15, v11, 4.0);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4) )
        {
          if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this[3] + 1080))(this[3], v4) == 1 )
          {
            sub_100D9E70((int *)v4, v4, v14);
            return 1;
          }
        }
        else
        {
          sub_100D9E70((int *)v4, v4, v14);
          sub_101FB2A0(v4);
        }
      }
    }
  }
  return 0;
}
