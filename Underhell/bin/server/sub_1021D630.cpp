__int16 __thiscall sub_1021D630(int *this, unsigned __int16 *a2, _DWORD *a3, int a4, int a5)
{
  __int16 result; // ax
  _DWORD *v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  _DWORD v15[3]; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+20h] [ebp+8h]

  switch ( *(_DWORD *)a5 )
  {
    case 1:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 68))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 2:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 76))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 3:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 84))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 4:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 92))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 5:
    case 9:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 60))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 6:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 64))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 7:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 48))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 8:
      result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(*this + 72))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0xA:
      result = *(_WORD *)(a5 + 18) & 0x40;
      v7 = a3;
      if ( !result || *a3 )
      {
        v10 = *(unsigned __int16 *)(a5 + 16);
        if ( result )
          v7 = (_DWORD *)*a3;
        for ( i = v10 - 1; i >= 0; --i )
        {
          result = (*(int (__thiscall **)(int *, _DWORD *, _DWORD))(*this + 8))(this, v7, *(_DWORD *)(a5 + 32));
          v7 = (_DWORD *)((char *)v7 + *(_DWORD *)(a5 + 36));
        }
      }
      else
      {
        v8 = *this;
        v9 = (*(int (__thiscall **)(int *))*this)(this);
        (*(void (__thiscall **)(int *, int))(v8 + 4))(this, *a2 + v9);
        result = Warning(
                   "Attempted to restore FIELD_EMBEDDEDBYREF %s but there is no destination memory\n",
                   *(const char **)(a5 + 4));
      }
      break;
    case 0xB:
      v11 = (*(int (__thiscall **)(int *))*this)(this);
      v12 = *a2;
      v15[0] = a3;
      v13 = v12 + v11;
      v14 = *(_DWORD *)(a5 + 24);
      v15[1] = (char *)a3 - *(_DWORD *)(a5 + 8);
      v15[2] = a5;
      (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v14 + 4))(v14, v15, this);
      result = (*(int (__thiscall **)(int *, int))(*this + 4))(this, v13);
      break;
    default:
      result = Warning("Bad field type\n");
      break;
  }
  return result;
}
