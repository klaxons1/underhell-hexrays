void __userpurge sub_1023AA70(int a1@<ebx>, int a2@<edi>, int a3)
{
  _WORD *v4; // eax
  int v5; // ecx
  const char *v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  _WORD *v10; // eax
  const char *v11; // eax
  const char *v12; // esi
  int v15; // [esp+4h] [ebp-4h]
  _WORD *v16; // [esp+10h] [ebp+8h]

  v4 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 88))(dword_106B3204, a3);
  v16 = v4;
  if ( v4 )
  {
    v5 = (unsigned __int16)v4[4];
    v15 = v5;
    if ( v4[4] )
    {
      v7 = 0;
      byte_106C4E94 = 1;
      if ( v5 > 0 )
      {
        while ( 1 )
        {
          v8 = dword_106B3204;
          v9 = *(_DWORD *)dword_106B3204;
          v10 = sub_1023A840(v4);
          v11 = (const char *)(*(int (__thiscall **)(int, _WORD *, int, int))(v9 + 48))(v8, &v10[2 * v7], a1, a2);
          v12 = v11;
          if ( !byte_106C4E94 )
            Warning("Direct precache of %s\n", v11);
          if ( !sub_100E8650()
            && !(*(unsigned __int8 (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31E8 + 4))(
                  dword_106B31E8,
                  v12) )
          {
            Warning("Late precache of %s\n", v12);
          }
          a2 = 0;
          a1 = 1;
          (**(void (__thiscall ***)(int, const char *))dword_106B31E8)(dword_106B31E8, v12);
          if ( ++v7 >= v15 )
            break;
          v4 = v16;
        }
      }
      byte_106C4E94 = 0;
    }
    else
    {
      v6 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 40))(dword_106B3204, a3);
      DevMsg("CSoundEmitterSystem:  sounds.txt entry '%s' has no waves listed under 'wave' or 'rndwave' key!!!\n", v6);
    }
  }
}
