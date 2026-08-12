char __thiscall sub_10220220(_DWORD **this, int a2, int *Src, int a4, int a5)
{
  int v5; // esi
  char result; // al
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  int v12; // [esp-4h] [ebp-Ch]

  v5 = a5;
  switch ( *(_DWORD *)a5 )
  {
    case 0xC:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[42])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0xD:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[46])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0xE:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[44])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0xF:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[38])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x10:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[33])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x11:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[35])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x12:
    case 0x13:
      ((void (__thiscall *)(_DWORD **, _DWORD, int *, _DWORD))(*this)[20])(
        this,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x15:
      ((void (__thiscall *)(_DWORD **, int, _DWORD, int *, _DWORD))(*this)[40])(
        this,
        a4,
        *(_DWORD *)(a5 + 4),
        Src,
        *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x16:
      sub_10220050((int)this, *(const char **)(a5 + 4), Src, *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x17:
      sub_102200B0(this, *(const char **)(a5 + 4), (int)Src, *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x18:
      sub_102200E0(this, *(const char **)(a5 + 4), (char *)Src, *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x19:
      sub_10220110((int)this, *(const char **)(a5 + 4), Src, *(unsigned __int16 *)(a5 + 16));
      result = 1;
      break;
    case 0x1A:
      v8 = *Src;
      Src = 0;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v8);
      if ( v9 )
      {
        v10 = (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 12))(dword_106B31F0, v9);
        Src = (int *)*sub_10162BE0(&a5, v10);
      }
      goto LABEL_10;
    case 0x1B:
      v12 = *Src;
      Src = 0;
      v11 = (_BYTE *)sub_101543C0(v12);
      if ( v11 )
        Src = *v11 != 0 ? (int *)v11 : 0;
LABEL_10:
      ((void (__thiscall *)(_DWORD **, _DWORD, int **, _DWORD))(*this)[20])(
        this,
        *(_DWORD *)(v5 + 4),
        &Src,
        *(unsigned __int16 *)(v5 + 16));
      result = 1;
      break;
    default:
      Warning("Bad field type\n");
      result = 0;
      break;
  }
  return result;
}
