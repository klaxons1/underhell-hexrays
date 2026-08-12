int __thiscall sub_101F6980(_DWORD *this, int a2)
{
  int v3; // ecx
  void (__thiscall *v4)(_DWORD *, int); // edx
  int v6; // [esp-4h] [ebp-Ch]

  v3 = this[64];
  if ( v3 )
  {
    switch ( a2 )
    {
      case 'O':
      case 'P':
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
        v6 = 1;
        goto LABEL_5;
      case 'S':
      case 'T':
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
        v6 = 3;
LABEL_5:
        v4 = *(void (__thiscall **)(_DWORD *, int))(*this + 868);
        this[64] = 0;
        v4(this, v6);
        break;
      default:
        return sub_10236C80(a2);
    }
  }
  return sub_10236C80(a2);
}
