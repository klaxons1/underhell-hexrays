void __thiscall sub_1021A0E0(void *this, float *a2, float a3)
{
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // esi
  float *v10; // eax
  double v11; // st7
  _BYTE v12[12]; // [esp+4h] [ebp-18h] BYREF
  float v13[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 && a3 > 0.0 )
  {
    for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this) - 1; i >= 0; --i )
    {
      v5 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, i);
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v5);
      if ( !v6 )
      {
        v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
        if ( !v6 )
          continue;
      }
      v7 = *(_DWORD *)(v6 + 12);
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
        v9 = (_BYTE *)v8;
        if ( v8 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8)
            && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 320))(v9)
            && !v9[3280] )
          {
            v10 = (float *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v9 + 516))(v9, v12);
            v13[0] = *v10 - *a2;
            v13[1] = v10[1] - a2[1];
            v11 = v10[2] - a2[2];
            v13[2] = v11;
            sub_10018D10(v13);
            if ( 2000.0 / a3 < v11 )
              sub_10219DB0((int)v9);
          }
        }
      }
    }
  }
}
