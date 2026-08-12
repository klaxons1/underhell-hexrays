char __thiscall sub_1021D200(void *this, int a2, _DWORD *a3, int a4, int a5)
{
  char result; // al
  bool v8; // zf
  _DWORD *v9; // ebx
  void (__thiscall ***v10)(_DWORD, _DWORD *, void *); // ecx
  char *v11; // eax
  _DWORD v12[3]; // [esp+8h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+14h]
  int i; // [esp+28h] [ebp+14h]

  switch ( *(_DWORD *)a5 )
  {
    case 1:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 64))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 2:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 80))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 3:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 96))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 4:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 112))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 5:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 48))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 6:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)this + 56))(
        this,
        *(_DWORD *)(a5 + 4),
        a3,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 7:
      (*(void (__thiscall **)(void *, _DWORD, int, _DWORD *))(*(_DWORD *)this + 72))(
        this,
        *(_DWORD *)(a5 + 4),
        2 * *(unsigned __int16 *)(a5 + 16),
        a3);
      result = 1;
      break;
    case 8:
      (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)this + 72))(
        this,
        *(_DWORD *)(a5 + 4),
        *(unsigned __int16 *)(a5 + 16),
        a3);
      result = 1;
      break;
    case 9:
      (*(void (__thiscall **)(void *, _DWORD, int, _DWORD *))(*(_DWORD *)this + 72))(
        this,
        *(_DWORD *)(a5 + 4),
        4 * *(unsigned __int16 *)(a5 + 16),
        a3);
      result = 1;
      break;
    case 0xA:
      v8 = (*(_BYTE *)(a5 + 18) & 0x40) == 0;
      v13 = *(unsigned __int16 *)(a5 + 16);
      if ( v8 )
        v9 = a3;
      else
        v9 = (_DWORD *)*a3;
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 32))(this, *(_DWORD *)(a5 + 4));
      for ( i = v13 - 1; i >= 0; --i )
      {
        (*(void (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)this + 20))(this, v9, *(_DWORD *)(a5 + 32));
        v9 = (_DWORD *)((char *)v9 + *(_DWORD *)(a5 + 36));
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
      result = 1;
      break;
    case 0xB:
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 32))(this, *(_DWORD *)(a5 + 4));
      v10 = *(void (__thiscall ****)(_DWORD, _DWORD *, void *))(a5 + 24);
      v12[0] = a3;
      v11 = (char *)a3 - *(_DWORD *)(a5 + 8);
      v12[2] = a5;
      v12[1] = v11;
      (**v10)(v10, v12, this);
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
      result = 1;
      break;
    default:
      Warning("Bad field type\n");
      result = 0;
      break;
  }
  return result;
}
