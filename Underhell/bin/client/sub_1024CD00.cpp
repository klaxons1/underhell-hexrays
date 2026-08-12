const char *__thiscall sub_1024CD00(unsigned int *this, int a2)
{
  int v2; // edi
  int v4; // eax
  const char *v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int (__thiscall *v10)(unsigned int *, int *, const char *, int); // edx
  _DWORD *v11; // eax
  unsigned int v12; // ebx
  _DWORD *v13; // eax
  const char *result; // eax

  v2 = a2;
  sub_10241570(this, a2);
  v4 = (*(int (__thiscall **)(unsigned int *))(*this + 144))(this);
  v5 = "MarlettSmall";
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 968))(v4) )
    v5 = "Marlett";
  v6 = *(_DWORD *)v2;
  v7 = (*(int (__thiscall **)(unsigned int *))(*this + 84))(this);
  v8 = (*(int (__thiscall **)(int, const char *, int))(v6 + 12))(v2, v5, v7);
  v9 = *this;
  v10 = *(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328);
  this[62] = v8;
  v11 = (_DWORD *)v10(this, &a2, "FrameGrip.Color1", v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v9 + 220))(this, *v11);
  v12 = *this;
  v13 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "FrameGrip.Color2",
                    v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v12 + 216))(this, *v13);
  result = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "Frame.AutoSnapRange");
  if ( result )
  {
    if ( *result )
    {
      result = (const char *)atoi(result);
      this[61] = (unsigned int)result;
    }
  }
  return result;
}
