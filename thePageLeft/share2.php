<style>
#thePageLeft
{
  color: #483D8B;
}

#thePageLeft td.self
{
  font-weight: bold;
}
#thePageLeft td.other
{
  font-weight: normal;
}

.thePageLeft_menu
{
  width: 80%;
  margin: auto;
  padding: 12px;
  border-radius: 12px;
  background-color: rgba(255,255,240,0.25);
}

</style>

<table
 width="100%"
>
<tr>
<td height="144px"></td>
</tr>
<tr>
<td>
<table
 class="thePageLeft_menu"
>
<?php thePageLeft_menu(/*void*/); ?>
</table>
</td>
</tr>
</table>

<?php /* end of [share2.php] */ ?>
