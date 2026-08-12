char __thiscall sub_101E2640(_BYTE *this, char *Destination, size_t Count)
{
  _BYTE *v5; // ecx
  char *v6; // eax
  size_t v7; // [esp-4h] [ebp-10h]

  *Destination = 0;
  if ( !this[5] )
  {
    if ( *(_BYTE *)sub_1022CF00(this + 316) )
    {
      v7 = Count;
      v5 = this + 316;
      goto LABEL_12;
    }
    v7 = Count;
LABEL_11:
    v5 = this + 24;
    goto LABEL_12;
  }
  if ( this[5] != 1 || (char)this[376] < 0 )
    return 0;
  if ( !*(_BYTE *)sub_1022CF00(this + 316) )
  {
    v7 = Count;
    goto LABEL_11;
  }
  v7 = Count;
  v5 = this + 316;
LABEL_12:
  v6 = (char *)sub_1022D040(v5);
  sub_102282F0(Destination, v6, v7);
  return 1;
}
