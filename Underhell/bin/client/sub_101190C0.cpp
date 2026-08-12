int __thiscall sub_101190C0(_DWORD *this, unsigned __int16 *a2, void *a3, int a4, int a5)
{
  int result; // eax
  int v6; // edi
  void *v7; // esp
  _DWORD *v8; // esi
  int v9; // ebx
  int v10; // edi
  int v11; // edi
  void *v12; // esp
  _DWORD *v13; // esi
  int v14; // ebx
  int v15; // edi
  _BYTE v16[12]; // [esp+0h] [ebp-Ch] BYREF

  result = a5;
  switch ( *(_DWORD *)a5 )
  {
    case 0xC:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 120))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0xD:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 128))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0xE:
      return result;
    case 0xF:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 108))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x10:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 100))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x11:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 104))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x12:
    case 0x13:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 76))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x15:
      result = (*(int (__thiscall **)(_DWORD *, int, void *, _DWORD, _DWORD))(*this + 116))(
                 this,
                 a4,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x16:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 132))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x17:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 136))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x18:
      result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD, _DWORD))(*this + 140))(
                 this,
                 a3,
                 *(unsigned __int16 *)(a5 + 16),
                 *a2);
      break;
    case 0x19:
      result = sub_10117FA0(this, a3, *(unsigned __int16 *)(a5 + 16), *a2);
      break;
    case 0x1A:
      v6 = *(unsigned __int16 *)(a5 + 16);
      v7 = alloca(4 * v6);
      result = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, _DWORD))(*this + 76))(this, v16, v6, *a2);
      if ( result > 0 )
      {
        v8 = a3;
        v9 = v16 - (_BYTE *)a3;
        v10 = result;
        do
        {
          result = *(_DWORD *)((char *)v8 + v9);
          if ( result )
          {
            result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 8))(
                       dword_10413178,
                       *(_DWORD *)((char *)v8 + v9));
            *v8 = result;
          }
          else
          {
            *v8 = -1;
          }
          ++v8;
          --v10;
        }
        while ( v10 );
      }
      break;
    case 0x1B:
      v11 = *(unsigned __int16 *)(a5 + 16);
      v12 = alloca(4 * v11);
      result = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, _DWORD))(*this + 76))(this, v16, v11, *a2);
      if ( result > 0 )
      {
        v13 = a3;
        v14 = v16 - (_BYTE *)a3;
        v15 = result;
        do
        {
          result = *(_DWORD *)((char *)v13 + v14);
          if ( result )
          {
            result = sub_10074490(*(_DWORD *)((char *)v13 + v14));
            *v13 = result;
          }
          else
          {
            *v13 = 0;
          }
          ++v13;
          --v15;
        }
        while ( v15 );
      }
      break;
    default:
      result = Warning("Bad field type\n");
      break;
  }
  return result;
}
