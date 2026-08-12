void __thiscall sub_102F8200(int *this)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  const char *v13; // eax
  float v14; // [esp+1Ch] [ebp-10h]

  sub_10095FB0((int)this);
  if ( !*((_BYTE *)this + 306) )
  {
    v2 = this[77];
    if ( (v2 == -1 || off_1061BE18[4 * (this[77] & 0xFFF) + 2] != v2 >> 12 || !off_1061BE18[4 * (this[77] & 0xFFF) + 1])
      && !*((_BYTE *)this + 5412) )
    {
      sub_102F4760((int)this);
      sub_10027740((int)this);
    }
  }
  if ( this[581] == 3
    && sub_10027B80(this)
    && (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this[1461] + 1364))(this[1461]) != this + 1460 )
  {
    this[698] = 3;
  }
  if ( sub_103942C0(this) == -1 )
  {
    v3 = this[1424];
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (this[1424] & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (this[1424] & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (this[1424] & 0xFFF) + 2] == v5 ? *v4 : 0;
          if ( !*(_DWORD *)(v6 + 828) )
          {
            v7 = off_1061BE18[4 * (this[1424] & 0xFFF) + 2] == v5 ? *v4 : 0;
            if ( sub_10070440(v7, (int)this) )
            {
              v8 = *this;
              v9 = sub_1026A890((unsigned int *)this + 1424);
              if ( (*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(v8 + 548))(this, v9, 16449, 0) )
                return;
            }
          }
        }
      }
    }
    sub_10395870(1, 1, 1);
    v10 = this[1424];
    if ( v10 == -1 || off_1061BE18[4 * (this[1424] & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (this[1424] & 0xFFF) + 1];
    (*(void (__thiscall **)(int *, int))(*this + 2284))(this, v11);
    this[1424] = -1;
  }
  if ( *((_BYTE *)this + 5710) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 1428) )
    {
      v12 = (_DWORD *)sub_1025FB50(1);
      if ( v12 )
      {
        if ( (!sub_102F6C40((int)this, 1)
           || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v12 + 1276))(v12, this, 0)
           || !sub_102F3D00(this, v12))
          && !sub_102F3E40(this) )
        {
          v13 = (const char *)this[1431];
          if ( !v13 )
            v13 = String;
          sub_10227360(this, 1, 0, v13);
          sub_10144F90((_BYTE *)this + 2760);
          v14 = *(float *)(dword_106B31C8 + 12) + 1.0;
          sub_100B8D50((float *)this + 690, v14);
          *((_BYTE *)this + 5710) = 0;
          *((float *)this + 1429) = RandomFloat(1.0, 3.0) + *(float *)(dword_106B31C8 + 12);
        }
      }
    }
  }
  else
  {
    sub_102F7D10(this);
  }
}
