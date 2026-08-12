char __thiscall sub_1018BEB0(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  double v14; // [esp+Ch] [ebp-8h] BYREF

  if ( sub_1000BAC0(this) )
  {
    v2 = sub_1000BAC0(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 504))(v2) )
    {
      v3 = sub_1000BAC0(this);
      v4 = v3;
      if ( *(_BYTE *)(v3 + 5189) )
      {
        if ( sub_10029CF0(this, 202) != -1 )
        {
          v5 = *this;
          v6 = (*(int (__thiscall **)(int *))(*this + 1124))(this);
          v7 = (*(int (__thiscall **)(int *, int, int))(*this + 1120))(this, 202, v6);
          v8 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1116))(this, 0, v7);
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v5 + 892))(this, v8) )
          {
            *((_BYTE *)this + 1967) = 1;
            *(float *)(v4 + 3016) = *((float *)off_103DC81C + 3) + 1.0;
            v14 = *((float *)off_103DC81C + 3) + 1.0;
            sub_1018BD00((float *)this + 493, &v14);
            v14 = *((float *)off_103DC81C + 3) + 1.0;
            sub_1018BD00((float *)this + 494, &v14);
            return 1;
          }
        }
      }
      else if ( *(_BYTE *)(v3 + 5190) )
      {
        if ( sub_10029CF0(this, 205) != -1 )
        {
          v10 = *this;
          v11 = (*(int (__thiscall **)(int *))(*this + 1124))(this);
          v12 = (*(int (__thiscall **)(int *, int, int))(*this + 1120))(this, 205, v11);
          v13 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1116))(this, 0, v12);
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v10 + 892))(this, v13) )
          {
            *((_BYTE *)this + 1966) = 1;
            *(float *)(v4 + 3016) = *((float *)off_103DC81C + 3) + 1.0;
            v14 = *((float *)off_103DC81C + 3) + 1.0;
            sub_1018BD00((float *)this + 493, &v14);
            v14 = *((float *)off_103DC81C + 3) + 1.0;
            sub_1018BD00((float *)this + 494, &v14);
            return 1;
          }
        }
      }
    }
  }
  *((_WORD *)this + 983) = 0;
  return sub_1000B690(this);
}
