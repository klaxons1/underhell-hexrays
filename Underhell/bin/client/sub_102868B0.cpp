void __thiscall sub_102868B0(_BYTE *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  bool v10; // cc
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edx
  void (__thiscall *v18)(_BYTE *, _DWORD); // eax
  int v19; // [esp+8h] [ebp-8h] BYREF
  int v20; // [esp+Ch] [ebp-4h] BYREF

  if ( this[208] )
  {
    (*(void (__thiscall **)(_BYTE *, int *, int *))(*(_DWORD *)this + 280))(this, &v20, &v19);
    v4 = *((_DWORD *)this + 55);
    v5 = *((_DWORD *)this + 56);
    if ( this[207] )
    {
      v6 = *((_DWORD *)this + 58);
      v7 = a3 + v4 - v6;
      v8 = v5 - v6 + a3;
      v9 = v19;
      v10 = v8 <= v19;
      *((_DWORD *)this + 53) = v7;
      *((_DWORD *)this + 54) = v8;
      if ( !v10 )
      {
        *((_DWORD *)this + 53) = v9 + v7 - v8;
        v11 = *((_DWORD *)this + 60) - *((_DWORD *)this + 62);
        *((_DWORD *)this + 54) = v9;
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 768))(this, v11);
      }
    }
    else
    {
      v12 = *((_DWORD *)this + 57);
      v13 = a2 + v4 - v12;
      v14 = v5 - v12 + a2;
      v15 = v20;
      v10 = v14 <= v20;
      *((_DWORD *)this + 53) = v13;
      *((_DWORD *)this + 54) = v14;
      if ( !v10 )
      {
        *((_DWORD *)this + 53) = v15 + v13 - v14;
        *((_DWORD *)this + 54) = v15;
      }
    }
    v16 = *((_DWORD *)this + 53);
    if ( v16 < 0 )
    {
      v17 = *(_DWORD *)this;
      *((_DWORD *)this + 54) -= v16;
      v18 = *(void (__thiscall **)(_BYTE *, _DWORD))(v17 + 768);
      *((_DWORD *)this + 53) = 0;
      v18(this, 0);
    }
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 820))(this);
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 824))(this);
  }
}
