int __thiscall sub_102682A0(char *this)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int, int); // edx
  int v9; // ebx
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 864))(this);
  if ( !this[320] )
  {
    v9 = *(_DWORD *)v2;
    v7 = *(_DWORD *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)this + 228))(this, &v11);
    v8 = *(void (__thiscall **)(int, int))(v9 + 20);
    goto LABEL_8;
  }
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
  if ( !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 240))(this) )
  {
    if ( !v3
      || (v4 = dword_1047CA70,
          v5 = *(_DWORD *)this,
          v11 = *(_DWORD *)dword_1047CA70,
          v6 = (*(int (__thiscall **)(char *))(v5 + 148))(this),
          !(*(unsigned __int8 (__thiscall **)(int, int, int))(v11 + 88))(v4, v3, v6)) )
    {
      v7 = *(_DWORD *)(this + 291);
      v8 = *(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 20);
LABEL_8:
      v8(v2, v7);
      goto LABEL_9;
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(this + 299));
LABEL_9:
  sub_1024AD80((int)this);
  return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 16))(this);
}
