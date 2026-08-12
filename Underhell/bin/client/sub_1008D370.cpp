void __thiscall sub_1008D370(_BYTE *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ebx
  int i; // edi
  int v6; // eax
  int v7; // ebx
  float v8; // [esp+24h] [ebp-Ch]
  float v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]
  float v11; // [esp+2Ch] [ebp-4h]

  if ( !this[208] )
  {
    this[208] = 1;
    sub_102334D0("decals/rendershadow", "Decal textures", 1);
    sub_102334D0("decals/rendermodelshadow", "Decal textures", 1);
    *((_DWORD *)this + 38) = -1;
    *((_DWORD *)this + 39) = -1;
    *((_DWORD *)this + 40) = -1;
    *((_DWORD *)this + 41) = -1;
    *((_WORD *)this + 84) = -1;
    sub_10233450(1024, 1024, 0, 11, 2, 0, "_rt_Shadows");
    sub_1008BDA0((int)(this + 64));
    v2 = (unsigned __int8)this[17];
    v3 = (unsigned __int8)this[18];
    v4 = *((_DWORD *)this + 6);
    v10 = (unsigned __int8)this[16];
    this[209] = 1;
    v8 = (double)v10 * 0.0039215689;
    v9 = (double)v2 * 0.0039215689;
    v11 = 0.0039215689 * (double)v3;
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 112))(
      v4,
      LODWORD(v8),
      LODWORD(v9),
      LODWORD(v11));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 7) + 112))(
      *((_DWORD *)this + 7),
      LODWORD(v8),
      LODWORD(v9),
      LODWORD(v11));
    for ( i = *((unsigned __int16 *)this + 24);
          (_WORD)i != 0xFFFF;
          i = *(unsigned __int16 *)(*((_DWORD *)this + 9) + v6 + 166) )
    {
      v6 = 168 * (unsigned __int16)i;
      v7 = v6 + *((_DWORD *)this + 9);
      if ( (*(_BYTE *)(v7 + 8) & 4) != 0 )
      {
        sub_1008C210((int)this, i);
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 140))(this, i);
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 8))(
          *(unsigned __int16 *)(v7 + 4),
          *((_DWORD *)this + 6),
          *((_DWORD *)this + 7),
          (unsigned __int16)i);
        v6 = 168 * (unsigned __int16)i;
      }
    }
  }
}
