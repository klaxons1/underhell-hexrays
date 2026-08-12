int __thiscall sub_1016A320(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      *(_WORD *)((char *)&v5 + 1) = *(_WORD *)(this + 85);
      LOBYTE(v4) = *(_BYTE *)(this + 87);
      LOBYTE(v5) = *(_BYTE *)(this + 84);
      HIBYTE(v5) = -1;
      *(_WORD *)((char *)&v4 + 1) = *(_WORD *)(this + 88);
      HIBYTE(v4) = -1;
      if ( sub_10229D00(32) )
        v3 = sub_10229D20("TempEntity");
      else
        v3 = 0;
      sub_1022ACA0("te", 16);
      sub_1022ABA0("name", "TE_ShatterSurface");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *(float *)(this + 16));
      sub_1022ACC0("originy", *(float *)(this + 20));
      sub_1022ACC0("originz", *(float *)(this + 24));
      sub_1022ACC0("anglesx", *(float *)(this + 28));
      sub_1022ACC0("anglesy", *(float *)(this + 32));
      sub_1022ACC0("anglesz", *(float *)(this + 36));
      sub_1022ACC0("forcex", *(float *)(this + 40));
      sub_1022ACC0("forcey", *(float *)(this + 44));
      sub_1022ACC0("forcez", *(float *)(this + 48));
      sub_1022ACC0("forceposx", *(float *)(this + 52));
      sub_1022ACC0("forceposy", *(float *)(this + 56));
      sub_1022ACC0("forceposz", *(float *)(this + 60));
      sub_1022AB60("frontcolor", v5);
      sub_1022AB60("backcolor", v4);
      sub_1022ACC0("width", *(float *)(this + 64));
      sub_1022ACC0("height", *(float *)(this + 68));
      sub_1022ACC0("size", *(float *)(this + 72));
      sub_1022ACA0("surfacetype", *(_DWORD *)(this + 80));
      sub_101BC9C0(0, v3);
      return sub_1022AF00(v3);
    }
  }
  return result;
}
