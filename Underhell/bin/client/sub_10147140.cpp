char __thiscall sub_10147140(int this, const void *a2, char a3, _DWORD *a4, char *a5)
{
  char v6; // al
  int v7; // ebx
  int v8; // ebx
  _BYTE *v9; // eax
  int v10; // eax
  bool v11; // zf
  char result; // al

  sub_10145000((_DWORD *)this, a2);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 120))(dword_1047C97C);
  *(_BYTE *)(this + 324) = v6;
  sub_101432D0((float *)this, (int)a4, (float *)(this + 316), (float *)(this + 320), v6);
  v7 = a4[5];
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 90 )
  {
    v8 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v7 + 44))(v7, "$underwateroverlay", 0, 0);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 68))(v8) )
      {
        v9 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 24))(v8);
        if ( *v9 != 48 )
        {
          v10 = (*(int (__thiscall **)(int, _BYTE *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                  dword_1047C96C,
                  v9,
                  "Other textures",
                  1,
                  0);
          sub_10233300(v10);
        }
      }
    }
  }
  v11 = *(_BYTE *)(this + 324) == 0;
  *(_DWORD *)(this + 132) = 12304;
  *(_DWORD *)(this + 136) = 2;
  if ( v11 )
    *(_DWORD *)(this + 132) = 12308;
  if ( (*a5 & 0x10) != 0 )
    *(_DWORD *)(this + 132) |= 0x40u;
  if ( (*a5 & 0x24) == 0 )
    *(_DWORD *)(this + 132) |= 0x20u;
  *(_DWORD *)(this + 328) = *a4;
  *(_DWORD *)(this + 332) = a4[1];
  *(_DWORD *)(this + 336) = a4[2];
  *(_DWORD *)(this + 340) = a4[3];
  *(_DWORD *)(this + 344) = a4[4];
  *(_DWORD *)(this + 348) = a4[5];
  result = *a5;
  *(_BYTE *)(this + 312) = *a5;
  *(_BYTE *)(this + 352) = a3;
  return result;
}
