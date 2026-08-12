const char *__thiscall sub_1021F7C0(_BYTE *this, unsigned __int16 *a2, const char **a3, int a4, int a5)
{
  const char **v5; // edi
  const char *result; // eax
  int v8; // ebx
  void *v9; // esp
  const char **v10; // edi
  int v11; // ebx
  const char *v12; // eax
  int v13; // ebx
  void *v14; // esp
  const char **v15; // edi
  int v16; // ebx
  const char *v17; // eax
  const char *v18; // eax
  char *v19; // eax
  int i; // esi
  _BYTE v21[12]; // [esp+0h] [ebp-110h] BYREF
  char Destination[260]; // [esp+Ch] [ebp-104h] BYREF
  const char *v23; // [esp+118h] [ebp+8h]
  const char *v24; // [esp+118h] [ebp+8h]
  const char *v25; // [esp+118h] [ebp+8h]

  v5 = (const char **)a5;
  switch ( *(_DWORD *)a5 )
  {
    case 0xC:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 120))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0xD:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 128))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0xE:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 124))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0xF:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 108))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x10:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 100))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x11:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 104))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x12:
    case 0x13:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 76))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      v25 = result;
      if ( this[36] )
      {
        if ( *v5 == (const char *)18 )
        {
          v18 = *a3;
          if ( !*a3 )
            v18 = String;
          result = (const char *)sub_10429530(v18, ".bsp");
          if ( result )
          {
            sub_104299C0(Destination, "maps/", 0x104u);
            v19 = *(char **)(dword_106B31C8 + 60);
            if ( !v19 )
              v19 = (char *)String;
            sub_10429750((int)Destination, v19, 260, -1);
            sub_10429750((int)Destination, ".bsp", 260, -1);
            result = (const char *)*sub_10162BE0(&a5, Destination);
            *a3 = result;
          }
        }
        for ( i = 0; i < (int)v25; ++i )
        {
          if ( a3[i] )
          {
            result = *v5;
            if ( *v5 == (const char *)18 )
            {
              result = (const char *)sub_100E8220((int)v5, a3[i]);
            }
            else if ( result == (const char *)19 )
            {
              result = (const char *)sub_1023B8B0((char *)a3[i]);
            }
          }
        }
      }
      break;
    case 0x15:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, int, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 116))(
                               this,
                               a4,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x16:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 132))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x17:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 136))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x18:
      result = (const char *)(*(int (__thiscall **)(_BYTE *, const char **, _DWORD, _DWORD))(*(_DWORD *)this + 140))(
                               this,
                               a3,
                               *(unsigned __int16 *)(a5 + 16),
                               *a2);
      break;
    case 0x19:
      result = (const char *)sub_1021E570(this, a3, *(unsigned __int16 *)(a5 + 16), *a2);
      break;
    case 0x1A:
      v8 = *(unsigned __int16 *)(a5 + 16);
      v9 = alloca(4 * v8);
      v10 = (const char **)v21;
      result = (const char *)(*(int (__thiscall **)(_BYTE *, _BYTE *, int, _DWORD))(*(_DWORD *)this + 76))(
                               this,
                               v21,
                               v8,
                               *a2);
      if ( (int)result > 0 )
      {
        v11 = (char *)a3 - v21;
        v23 = result;
        do
        {
          result = *v10;
          if ( *v10 )
          {
            result = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(
                                     dword_106B31F0,
                                     *v10);
            *(const char **)((char *)v10 + v11) = result;
            if ( this[36] )
            {
              v12 = *v10;
              if ( !*v10 )
                v12 = String;
              result = (const char *)sub_100E8220((int)v10, v12);
            }
          }
          else
          {
            *(const char **)((char *)v10 + v11) = (const char *)-1;
          }
          ++v10;
          --v23;
        }
        while ( v23 );
      }
      break;
    case 0x1B:
      v13 = *(unsigned __int16 *)(a5 + 16);
      v14 = alloca(4 * v13);
      v15 = (const char **)v21;
      result = (const char *)(*(int (__thiscall **)(_BYTE *, _BYTE *, int, _DWORD))(*(_DWORD *)this + 76))(
                               this,
                               v21,
                               v13,
                               *a2);
      if ( (int)result > 0 )
      {
        v16 = (char *)a3 - v21;
        v24 = result;
        do
        {
          result = *v15;
          if ( *v15 )
          {
            result = (const char *)sub_10154380(*v15);
            *(const char **)((char *)v15 + v16) = result;
            if ( this[36] )
            {
              v17 = *v15;
              if ( !*v15 )
                v17 = String;
              result = (const char *)sub_10154360((int)v17);
            }
          }
          else
          {
            *(const char **)((char *)v15 + v16) = 0;
          }
          ++v15;
          --v24;
        }
        while ( v24 );
      }
      break;
    default:
      result = (const char *)Warning("Bad field type\n");
      break;
  }
  return result;
}
