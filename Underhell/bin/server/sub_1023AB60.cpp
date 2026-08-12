void __stdcall sub_1023AB60(int a1)
{
  _WORD *v2; // eax
  const char *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  _WORD *v7; // eax
  int v8; // eax
  int v9; // [esp+4h] [ebp-4h]
  _WORD *v10; // [esp+10h] [ebp+8h]

  v2 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 88))(dword_106B3204, a1);
  v10 = v2;
  if ( v2 )
  {
    v9 = (unsigned __int16)v2[4];
    if ( v2[4] )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = dword_106B3204;
        v6 = *(_DWORD *)dword_106B3204;
        v7 = sub_1023A840(v2);
        v8 = (*(int (__thiscall **)(int, _WORD *))(v6 + 48))(v5, &v7[2 * v4]);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E8 + 8))(dword_106B31E8, v8);
        if ( ++v4 >= v9 )
          break;
        v2 = v10;
      }
    }
    else
    {
      v3 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 40))(dword_106B3204, a1);
      DevMsg("CSoundEmitterSystem:  sounds.txt entry '%s' has no waves listed under 'wave' or 'rndwave' key!!!\n", v3);
    }
  }
}
