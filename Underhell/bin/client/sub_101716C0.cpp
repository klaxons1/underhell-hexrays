int __thiscall sub_101716C0(void *this, int a2, int a3, float a4, float a5)
{
  int v5; // esi
  int result; // eax
  int v7; // ebx
  float *v8; // eax
  float *v9; // eax
  float *v10; // esi
  double v11; // st7
  int v12; // edx
  int v13; // edi
  int v14; // eax
  float v15[3]; // [esp+4h] [ebp-10h] BYREF
  int v16; // [esp+10h] [ebp-4h]

  v16 = (int)this;
  if ( a2 <= 0 || a2 > *((_DWORD *)off_103DC81C + 5) )
    return Warning("Bad client in AttachTentToPlayer()!\n");
  v5 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)off_103DCD78 + 16389) + 12))((char *)off_103DCD78 + 65556, a2);
  if ( !v5 )
    return Warning("Couldn't get IClientEntity for %i\n", a2);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a3);
  if ( !v7 )
    return Warning("No model %d!\n", a3);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
  v15[0] = *v8;
  v15[1] = v8[1];
  v15[2] = v8[2] + a4;
  v9 = sub_10170080(v16, v15, v7);
  v10 = v9;
  if ( !v9 )
    return Warning("No temp ent.\n");
  sub_10035090(v9, 0, 0);
  sub_10010170(v10, 255);
  *((_DWORD *)v10 + 511) = 255;
  *((_BYTE *)v10 + 84) = 14;
  *((_WORD *)v10 + 1008) = a2;
  v10[505] = 0.0;
  v10[506] = 0.0;
  v10[507] = a4;
  v11 = *((float *)off_103DC81C + 3);
  *((_DWORD *)v10 + 495) |= 0xA000u;
  v12 = *((_DWORD *)v10 + 1);
  v10[496] = v11 + a5;
  v13 = *(_DWORD *)dword_10413178;
  v14 = (*(int (**)(void))(v12 + 36))();
  result = (*(int (__thiscall **)(int, int))(v13 + 36))(dword_10413178, v14);
  if ( result == 2 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v7) - 1;
    *((_DWORD *)v10 + 495) |= 0x10100u;
    v10[497] = (float)result;
    v10[517] = 10.0;
  }
  else
  {
    v10[497] = 0.0;
  }
  v10[518] = 0.0;
  return result;
}
