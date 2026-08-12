int __thiscall sub_1024CAB0(void *this, int a2)
{
  int v2; // edi
  int v4; // edx
  int (__thiscall ***v5)(void *, int, int); // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v14; // eax
  int v15; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 == 107 )
  {
    *((_BYTE *)this + 216) = 1;
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a2, &v15);
    v4 = v15;
    *((_DWORD *)this + 59) = a2;
    v5 = (int (__thiscall ***)(void *, int, int))*((_DWORD *)this + 51);
    *((_DWORD *)this + 60) = v4;
    sub_10236170(v5, (int)this + 220, (int)this + 224);
    sub_102361D0(*((int (__thiscall ****)(void *, int, int))this + 51), (int)this + 228, (int)this + 232);
    v6 = dword_1047CA68;
    v7 = *(_DWORD *)dword_1047CA68;
    v8 = (**(int (__thiscall ***)(void *))this)(this);
    (*(void (__thiscall **)(int, int))(v7 + 8))(v6, v8);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
    if ( !v9
      || (v10 = dword_1047CA70,
          v11 = *(_DWORD *)dword_1047CA70,
          v12 = (***((int (__thiscall ****)(_DWORD))this + 51))(*((_DWORD *)this + 51)),
          !(*(unsigned __int8 (__thiscall **)(int, int, int))(v11 + 88))(v10, v9, v12)) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 51) + 48))(*((_DWORD *)this + 51), 0);
    }
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 51) + 16))(*((_DWORD *)this + 51));
  }
  else
  {
    v14 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 400))(v14, v2);
  }
}
